#ifndef _TTXPAGESTREAM_H_
#define _TTXPAGESTREAM_H_

#include <ttxpage.h>

/** @brief Extends TTXPage to allow Service to iterate through this page.
 */
class TTXPageStream : public TTXPage
{
    public:
        /** Default constructor. Don't call this */
        TTXPageStream();
        /** Default destructor */
        virtual ~TTXPageStream();

        /** The normal constructor
         */
        TTXPageStream(std::string filename);

        /** Access _lineCounter
         * \return The current value of _lineCounter
         */
        unsigned int GetLineCounter() { return _lineCounter; }
        /** Set _lineCounter
         * \param val New value to set
         */
        void SetLineCounter(unsigned int val) { _lineCounter = val; }
        /** Access _isCarousel
         * \return The current value of _isCarousel
         */
        bool GetisCarousel() { return _isCarousel; }
        /** Set _isCarousel
         * \param val New value to set
         */
        void SetisCarousel(bool val) { _isCarousel = val; }

        /** Access _CurrentPage
         * \return The current value of _CurrentPage
         */
        TTXPageStream* GetCurrentPage() { return _CurrentPage; }
        /** Set _CurrentPage
         * \param val New value to set
         */
        void SetCurrentPage(TTXPageStream* val) { _CurrentPage = val; }

        /** Access the currently iterated row
         * \return The current row from the current page
         */
        TTXLine* GetCurrentRow();
        /** Access the next iterated row
         * \return The next row from the current page
         */
        TTXLine* GetNextRow();

    protected:

    private:
        unsigned int _lineCounter; //!< Member variable "_LineCounter" indexes the line in the page being transmitted
        bool _isCarousel; //!< Member variable "_isCarousel" If
        TTXPageStream* _CurrentPage; //!< Member variable "_currentPage" points to the subpage being transmitted
};

#endif // _TTXPAGESTREAM_H_
